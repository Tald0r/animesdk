#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7E06CA0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7E06CD0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__POSTLATEUPDATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x7E06D10)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x7E06CE0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem___c_TypeDefinitionIndex = 60735;

	class NPCCrowdLodSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x2DA40);
		}
		static ::NPCCrowd::Lod::NPCCrowdLodSubSystem___c** StaticGet___9()
		{
			return (::NPCCrowd::Lod::NPCCrowdLodSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x2DA48);
		}
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x2DA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__11_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATE_B__11_0_OFFSET))(this, npcComp);
		}

		::System::Void _PostLateUpdate_b__13_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__POSTLATEUPDATE_B__13_0_OFFSET))(this, npcComp);
		}
	};
}
