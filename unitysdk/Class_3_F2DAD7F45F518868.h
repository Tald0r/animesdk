#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_F2DAD7F45F518868_Struct_2_BBD456EBC9087BC2_3.h"

class Class_2_C98CD2116E71F5C1;
class NPCAvatarRuntimeData;
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::CrowdPhysics { class NPCPhysicsRuntimeData; }
namespace NPCCrowd::GameplayTask { class NPCGameplayTaskContainer; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F2DAD7F45F518868_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7BE23F0)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7BE2AB0)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x7BE2880)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x7BE2740)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x7BE27E0)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_EEBB7BA0EB4C8B79_OFFSET UNITYSDK_OFFSET(0x7BE2890)
#define CLASS_3_F2DAD7F45F518868_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7BE24D0)
#define CLASS_3_F2DAD7F45F518868__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BE2450)
#define CLASS_3_F2DAD7F45F518868__CTOR_OFFSET UNITYSDK_OFFSET(0x7BE2610)

inline static constexpr unsigned int Class_3_F2DAD7F45F518868_TypeDefinitionIndex = 41760;

class Class_3_F2DAD7F45F518868 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0xC7; // 0x0
	::Class_2_C98CD2116E71F5C1* Field_3_3; // 0x48
	::NPCCrowd::Animation::NPCUnionAnimator* Field_3_7; // 0x50
	::NPCCrowd::Ability::NPCAbility* Field_3_8; // 0x58
	::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* Field_3_10; // 0x60
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* Field_3_4; // 0x68
	::NPCCrowd::GameplayTask::NPCGameplayTaskContainer* Field_3_9; // 0x70
	::NPCAvatarRuntimeData* Field_3_6; // 0x78
	::NPCCrowd::CrowdPhysics::NPCPhysicsRuntimeData* Field_3_5; // 0x80
	::System::Collections::Generic::List_1<::Class_3_F2DAD7F45F518868_Struct_2_BBD456EBC9087BC2_3>* Field_3_12; // 0x88
	::System::UInt64 Field_3_1; // 0x90
	::System::Int32 Field_3_2; // 0x98
	::System::Boolean Field_3_11; // 0x9C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_ONCLEAN_OFFSET))(this);
	}

	::System::Void Method_3_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	static ::Class_3_F2DAD7F45F518868* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F2DAD7F45F518868*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_EEBB7BA0EB4C8B79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_EEBB7BA0EB4C8B79_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
