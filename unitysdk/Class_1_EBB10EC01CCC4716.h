#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_EBB10EC01CCC4716_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x9D4A6E0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x9D4A630)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_8C4121B64D1B4C8A_OFFSET UNITYSDK_OFFSET(0x9D4A260)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9D4A5C0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9D4A1E0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x9D4A440)
#define CLASS_1_EBB10EC01CCC4716__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4A1D0)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_TypeDefinitionIndex = 53757;

class Class_1_EBB10EC01CCC4716 : public ::System::Object
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_1_5; // 0x10
	::MoleMole::EffectSimulate::NapEffectSimulatorMgr* Field_1_1; // 0x18
	::MoleMole::Battle::Entity* Field_1_14; // 0x20
	::Class_3_6124F7AF16B30AB1* Field_1_3; // 0x28
	::Class_3_A5AF8EA2F7094EFB* Field_1_2; // 0x30
	::Il2CppArray<::System::Int32>* Field_1_4; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::UInt32 Field_1_0; // 0x44
	::System::Single Field_1_8; // 0x48
	::System::Boolean Field_1_7; // 0x4C
	::System::Boolean Field_1_13; // 0x4D
	::System::Single Field_1_10; // 0x50
	::System::Boolean Field_1_15; // 0x54
	::System::Boolean Field_1_11; // 0x55
	::System::Boolean Field_1_12; // 0x56
	::System::Boolean Field_1_9; // 0x57

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_8C4121B64D1B4C8A(::Class_1_EBB10EC01CCC4716*& a1)
	{
		return ((::System::Void(*)(::Class_1_EBB10EC01CCC4716*&))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_8C4121B64D1B4C8A_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}

	static ::Class_1_EBB10EC01CCC4716* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_EBB10EC01CCC4716*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Void(*)(::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}
};
