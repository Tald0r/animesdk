#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_77E02A35C116A0EE_Enum_3_006F747AD33F415B.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class AnimatorZone; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_GETZONEHANDLER_OFFSET UNITYSDK_OFFSET(0x6BB3320)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_INITDEFAULTHANDLERS_OFFSET UNITYSDK_OFFSET(0x6BB3440)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_REGISTEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x6BB30A0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_REGISTERZONEHANDLER_OFFSET UNITYSDK_OFFSET(0x6BB31F0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_TESTAUDIOHANDLER_OFFSET UNITYSDK_OFFSET(0x6BB34A0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x6BB3510)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationTimelineEventHandler_TypeDefinitionIndex = 59962;

	class NPCAnimationTimelineEventHandler : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*>*>** StaticGet_EventHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineEventHandler_TypeDefinitionIndex)->GetStaticField(0x2EE80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>** StaticGet_ZoneEnterHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineEventHandler_TypeDefinitionIndex)->GetStaticField(0x2EE88);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>** StaticGet_ZoneUpdateHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineEventHandler_TypeDefinitionIndex)->GetStaticField(0x2EE90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>** StaticGet_ZoneExitHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineEventHandler_TypeDefinitionIndex)->GetStaticField(0x2EE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterEventHandler(::System::Int32 eventHash, ::System::Action_2<::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*>* handler)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_REGISTEREVENTHANDLER_OFFSET))(eventHash, handler);
		}

		static ::System::Void RegisterZoneHandler(::System::Int32 eventHash, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>* handler, ::Struct_2_77E02A35C116A0EE_Enum_3_006F747AD33F415B type)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*, ::Struct_2_77E02A35C116A0EE_Enum_3_006F747AD33F415B))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_REGISTERZONEHANDLER_OFFSET))(eventHash, handler, type);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>* GetZoneHandler(::Struct_2_77E02A35C116A0EE_Enum_3_006F747AD33F415B type)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>*(*)(::Struct_2_77E02A35C116A0EE_Enum_3_006F747AD33F415B))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_GETZONEHANDLER_OFFSET))(type);
		}

		static ::System::Void InitDefaultHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_INITDEFAULTHANDLERS_OFFSET))();
		}

		static ::System::Void TestAudioHandler(::MoleMole::Config::AnimatorEvent* e, ::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_TESTAUDIOHANDLER_OFFSET))(e, entity);
		}
	};
}
