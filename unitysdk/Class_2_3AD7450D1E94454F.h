#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_3AD7450D1E94454F_METHOD_2_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0xBCCB690)
#define CLASS_2_3AD7450D1E94454F_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xBCCB580)
#define CLASS_2_3AD7450D1E94454F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBCCB630)
#define CLASS_2_3AD7450D1E94454F__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCCB500)
#define CLASS_2_3AD7450D1E94454F__CTOR_OFFSET UNITYSDK_OFFSET(0xBCCB570)

inline static constexpr unsigned int Class_2_3AD7450D1E94454F_TypeDefinitionIndex = 81108;

class Class_2_3AD7450D1E94454F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x11E; // 0x0
	::System::Int32 Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_METHOD_2_A3E94568D5184024_OFFSET))(this, a1, a2);
	}
};
