#include <iostream>
#include <string>
#include <vector>
#include <sapi.h>

void PronounceWords(const std::vector<std::wstring> &words)
{
    CoInitialize(nullptr);

    ISpVoice *pVoice = nullptr;
    HRESULT hr = CoCreateInstance(CLSID_SpVoice, nullptr, CLSCTX_ALL, IID_ISpVoice, (void **)&pVoice);
    if (SUCCEEDED(hr))
    {
        for (const auto &word : words)
        {
            pVoice->Speak(word.c_str(), 0, nullptr);
        }

        pVoice->Release();
    }

    CoUninitialize();
}

int main()
{
    std::vector<std::wstring> wordsToPronounce;

    std::cout << "Enter words to pronounce (press Enter to stop):" << std::endl;

    std::wstring word;
    while (std::getline(std::wcin, word) && !word.empty())
    {
        wordsToPronounce.push_back(word);
    }

    PronounceWords(wordsToPronounce);

    return 0;
}
