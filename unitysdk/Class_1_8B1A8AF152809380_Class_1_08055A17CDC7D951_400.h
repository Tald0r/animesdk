#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8B1A8AF152809380;
namespace System { class Action; }

#define CLASS_1_8B1A8AF152809380_CLASS_1_08055A17CDC7D951_400_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x11B85A50)
#define CLASS_1_8B1A8AF152809380_CLASS_1_08055A17CDC7D951_400__CTOR_OFFSET UNITYSDK_OFFSET(0x11B85A40)

inline static constexpr unsigned int Class_1_8B1A8AF152809380_Class_1_08055A17CDC7D951_400_TypeDefinitionIndex = 13760;

class Class_1_8B1A8AF152809380_Class_1_08055A17CDC7D951_400 : public ::System::Object
{
public:
	::Class_1_8B1A8AF152809380* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B1A8AF152809380_CLASS_1_08055A17CDC7D951_400__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_8B1A8AF152809380_CLASS_1_08055A17CDC7D951_400_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
