#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_MoveType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F1F96FF70D60867B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x6B86FF0)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x6B87BC0)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_3ED922CF439CED90_OFFSET UNITYSDK_OFFSET(0x6B86B70)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x6B87060)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x6B86490)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x6B87120)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0x6B87910)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x6B85F10)
#define CLASS_1_F1F96FF70D60867B__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85E80)

inline static constexpr unsigned int Class_1_F1F96FF70D60867B_TypeDefinitionIndex = 71404;

class Class_1_F1F96FF70D60867B : public ::System::Object
{
public:
	// static const ::System::Single Field_1_14; // 0x0
	// static const ::System::Single Field_1_15; // 0x0
	::System::Collections::Generic::List_1<::System::Single>* Field_1_1; // 0x10
	::Class_3_F35B080B137ECC46* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_0; // 0x20
	::Class_3_248DACE3BB3053DD* Field_1_4; // 0x28
	::System::Single Field_1_11; // 0x30
	::System::Int32 Field_1_7; // 0x34
	::UnityEngine::Vector3 Field_1_9; // 0x38
	::System::Single Field_1_5; // 0x44
	::MoleMole::Config::LevelShootGameConfig_MoveType Field_1_3; // 0x48
	::System::Single Field_1_8; // 0x4C
	::System::Single Field_1_12; // 0x50
	::System::Boolean Field_1_13; // 0x54
	::System::Boolean Field_1_10; // 0x55
	::System::Boolean Field_1_6; // 0x56

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_1_3ED922CF439CED90(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_3ED922CF439CED90_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9F84D1FF74319152()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_9F84D1FF74319152_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_82E992240300FB30_OFFSET))(this);
	}
};
