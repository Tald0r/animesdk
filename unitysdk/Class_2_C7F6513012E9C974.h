#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C7F6513012E9C974_METHOD_2_8A4712452B80C434_OFFSET UNITYSDK_OFFSET(0x81A8960)
#define CLASS_2_C7F6513012E9C974_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x81A88B0)
#define CLASS_2_C7F6513012E9C974_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x81A89E0)
#define CLASS_2_C7F6513012E9C974__CCTOR_OFFSET UNITYSDK_OFFSET(0x81A8830)
#define CLASS_2_C7F6513012E9C974__CTOR_OFFSET UNITYSDK_OFFSET(0x81A88A0)

inline static constexpr unsigned int Class_2_C7F6513012E9C974_TypeDefinitionIndex = 78672;

class Class_2_C7F6513012E9C974 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::UInt16 Field_2_6 = 0x10E; // 0x0
	::Il2CppArray<::System::Object*>* Field_2_5; // 0x20
	::System::String* Field_2_4; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C7F6513012E9C974__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7F6513012E9C974__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7F6513012E9C974_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_8A4712452B80C434(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_C7F6513012E9C974_METHOD_2_8A4712452B80C434_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7F6513012E9C974_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
