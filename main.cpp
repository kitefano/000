#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    return 0;
}







#include <iostream>
#include <string>

// 模拟 WritingPad 控件
class WritingPadControl {
public:
    void SetSignatureCallback(void (*callback)(const std::string&)) {
        signatureCallback = callback;
    }

    void SimulateSignatureEvent(const std::string& signatureData) {
        if (signatureCallback) {
            signatureCallback(signatureData);
        }
    }

private:
    void (*signatureCallback)(const std::string&) = nullptr;
};

// 模拟写入文件的函数
void WriteToFile(const std::string& filePath, const std::string& dataToWrite) {
    std::cout << "Writing to file: " << filePath << std::endl;
    std::cout << "Data: " << dataToWrite << std::endl;
}

// 设置回调函数的外部函数
void SetSignatureCallback(WritingPadControl& writingPad, void (*callback)(const std::string&)) {
    writingPad.SetSignatureCallback(callback);
}

// 回调函数
void SignatureCallback(const std::string& signatureData) {
    std::string filePath = "SignFile.txt";
    WriteToFile(filePath, signatureData);
}

int main() {
    WritingPadControl writingPad;

    // 设置回调函数
    SetSignatureCallback(writingPad, SignatureCallback);

    // 模拟签名事件
    std::string simulatedSignatureData = "SimulatedSignatureData";
    writingPad.SimulateSignatureEvent(simulatedSignatureData);

    return 0;
}
