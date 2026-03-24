#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6A34A2030956978C;
namespace System { class Action; }

#define CLASS_1_6A34A2030956978C_CLASS_1_08055A17CDC7D951_654_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x120B9BB0)
#define CLASS_1_6A34A2030956978C_CLASS_1_08055A17CDC7D951_654__CTOR_OFFSET UNITYSDK_OFFSET(0x120B9BA0)

inline static constexpr unsigned int Class_1_6A34A2030956978C_Class_1_08055A17CDC7D951_654_TypeDefinitionIndex = 16208;

class Class_1_6A34A2030956978C_Class_1_08055A17CDC7D951_654 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_6A34A2030956978C* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A34A2030956978C_CLASS_1_08055A17CDC7D951_654__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_6A34A2030956978C_CLASS_1_08055A17CDC7D951_654_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
