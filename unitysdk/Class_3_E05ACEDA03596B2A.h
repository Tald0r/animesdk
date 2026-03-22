#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class NapLodController;
class NapLodControllerGroup;

#define CLASS_3_E05ACEDA03596B2A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA462380)
#define CLASS_3_E05ACEDA03596B2A_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA462510)
#define CLASS_3_E05ACEDA03596B2A_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA462470)
#define CLASS_3_E05ACEDA03596B2A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA462310)
#define CLASS_3_E05ACEDA03596B2A__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4623E0)
#define CLASS_3_E05ACEDA03596B2A__CTOR_OFFSET UNITYSDK_OFFSET(0xA462460)

inline static constexpr unsigned int Class_3_E05ACEDA03596B2A_TypeDefinitionIndex = 41543;

class Class_3_E05ACEDA03596B2A : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0xC1; // 0x0
	::NapLodControllerGroup* Field_3_0; // 0x48
	::Il2CppArray<::NapLodController*>* Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E05ACEDA03596B2A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E05ACEDA03596B2A__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E05ACEDA03596B2A_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E05ACEDA03596B2A_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_E05ACEDA03596B2A* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E05ACEDA03596B2A*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E05ACEDA03596B2A_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E05ACEDA03596B2A_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
