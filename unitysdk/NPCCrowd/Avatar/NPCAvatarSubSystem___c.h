#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9AE843FF905C0BDB;
class Class_3_F2DAD7F45F518868;
namespace System { template <typename T1, typename T2> class Action_2; }

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x75824D0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7582510)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x7582520)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem___c_TypeDefinitionIndex = 41386;

	class NPCAvatarSubSystem___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Avatar::NPCAvatarSubSystem___c** StaticGet___9()
		{
			return (::NPCCrowd::Avatar::NPCAvatarSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x3C730);
		}
		static ::System::Action_2<::Class_3_F2DAD7F45F518868*, ::Class_3_9AE843FF905C0BDB*>** StaticGet___9__6_0()
		{
			return (::System::Action_2<::Class_3_F2DAD7F45F518868*, ::Class_3_9AE843FF905C0BDB*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x3C738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__6_0(::Class_3_F2DAD7F45F518868* npcComponent, ::Class_3_9AE843FF905C0BDB* materialComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__6_0_OFFSET))(this, npcComponent, materialComponent);
		}
	};
}
