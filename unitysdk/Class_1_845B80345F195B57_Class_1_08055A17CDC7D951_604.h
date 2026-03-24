#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_845B80345F195B57;
namespace System { class Action; }

#define CLASS_1_845B80345F195B57_CLASS_1_08055A17CDC7D951_604_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x16A64940)
#define CLASS_1_845B80345F195B57_CLASS_1_08055A17CDC7D951_604__CTOR_OFFSET UNITYSDK_OFFSET(0x16A64310)

inline static constexpr unsigned int Class_1_845B80345F195B57_Class_1_08055A17CDC7D951_604_TypeDefinitionIndex = 15853;

class Class_1_845B80345F195B57_Class_1_08055A17CDC7D951_604 : public ::System::Object
{
public:
	::Class_1_845B80345F195B57* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_845B80345F195B57_CLASS_1_08055A17CDC7D951_604__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_845B80345F195B57_CLASS_1_08055A17CDC7D951_604_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
