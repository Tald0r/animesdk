#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_4F2653B1D94D251B_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x15F3D890)
#define CLASS_2_4F2653B1D94D251B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F3D940)
#define CLASS_2_4F2653B1D94D251B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F3D810)
#define CLASS_2_4F2653B1D94D251B__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3D880)

inline static constexpr unsigned int Class_2_4F2653B1D94D251B_TypeDefinitionIndex = 58016;

class Class_2_4F2653B1D94D251B : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0xF8; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::String* Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x30
	::System::UInt32 Field_2_3; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4F2653B1D94D251B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2653B1D94D251B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2653B1D94D251B_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2653B1D94D251B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
