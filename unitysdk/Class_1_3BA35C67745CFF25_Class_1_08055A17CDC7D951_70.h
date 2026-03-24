#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3BA35C67745CFF25;
namespace System { class Action; }

#define CLASS_1_3BA35C67745CFF25_CLASS_1_08055A17CDC7D951_70_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x16F6AF60)
#define CLASS_1_3BA35C67745CFF25_CLASS_1_08055A17CDC7D951_70__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6AF50)

inline static constexpr unsigned int Class_1_3BA35C67745CFF25_Class_1_08055A17CDC7D951_70_TypeDefinitionIndex = 10419;

class Class_1_3BA35C67745CFF25_Class_1_08055A17CDC7D951_70 : public ::System::Object
{
public:
	::Class_1_3BA35C67745CFF25* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BA35C67745CFF25_CLASS_1_08055A17CDC7D951_70__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_3BA35C67745CFF25_CLASS_1_08055A17CDC7D951_70_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
