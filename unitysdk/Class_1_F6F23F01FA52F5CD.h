#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_273;
class Class_0_16E4307DCC419505_322;

#define CLASS_1_F6F23F01FA52F5CD_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x7E37300)
#define CLASS_1_F6F23F01FA52F5CD_METHOD_1_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x7E36F70)
#define CLASS_1_F6F23F01FA52F5CD_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x7E36D80)
#define CLASS_1_F6F23F01FA52F5CD_METHOD_1_49897F2BBAB2E7CE_OFFSET UNITYSDK_OFFSET(0x7E371C0)
#define CLASS_1_F6F23F01FA52F5CD_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x7E371B0)
#define CLASS_1_F6F23F01FA52F5CD_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x7E36D10)
#define CLASS_1_F6F23F01FA52F5CD__CTOR_OFFSET UNITYSDK_OFFSET(0x7E36C30)

inline static constexpr unsigned int Class_1_F6F23F01FA52F5CD_TypeDefinitionIndex = 56227;

class Class_1_F6F23F01FA52F5CD : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_273* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_322* Field_1_1; // 0x28
	::System::UInt32 Field_1_0; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_322* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_322*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6F23F01FA52F5CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6F23F01FA52F5CD_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_1_1C409C2CC83887DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F6F23F01FA52F5CD_METHOD_1_1C409C2CC83887DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6F23F01FA52F5CD_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6F23F01FA52F5CD_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_49897F2BBAB2E7CE(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F6F23F01FA52F5CD_METHOD_1_49897F2BBAB2E7CE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6F23F01FA52F5CD_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}
};
