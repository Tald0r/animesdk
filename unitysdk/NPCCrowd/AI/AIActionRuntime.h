#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ActionContext.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class AIActionRuntime_ActionDelegate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCHAT_OFFSET UNITYSDK_OFFSET(0x74316B0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCOLLIDERENABLE_OFFSET UNITYSDK_OFFSET(0x7436570)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONDELAYDESTROY_OFFSET UNITYSDK_OFFSET(0x7435A00)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFADE_OFFSET UNITYSDK_OFFSET(0x7434A60)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFOLLOW_OFFSET UNITYSDK_OFFSET(0x7436860)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONNAVMESHTO_OFFSET UNITYSDK_OFFSET(0x7430920)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x7437450)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGE_OFFSET UNITYSDK_OFFSET(0x7436E70)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYSINGLECLIPMONTAGE_OFFSET UNITYSDK_OFFSET(0x7437B60)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMBUBBLECHAT_OFFSET UNITYSDK_OFFSET(0x74331E0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMCHAT_OFFSET UNITYSDK_OFFSET(0x7432430)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETPATHFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x7436C40)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETSTATEPARAM_OFFSET UNITYSDK_OFFSET(0x7430F40)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSIMPLEMOVETO_OFFSET UNITYSDK_OFFSET(0x7435D60)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTAGHANDLER_OFFSET UNITYSDK_OFFSET(0x7435060)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTELEPORT_OFFSET UNITYSDK_OFFSET(0x7433FF0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTESTFORJOB_OFFSET UNITYSDK_OFFSET(0x7430200)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTONEARESTPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x7430400)
#define NPCCROWD_AI_AIACTIONRUNTIME_TRYINVOKEACTION_OFFSET UNITYSDK_OFFSET(0x7430050)
#define NPCCROWD_AI_AIACTIONRUNTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x7438250)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRuntime_TypeDefinitionIndex = 38905;

	class AIActionRuntime : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_ActionDelegate*>** StaticGet_Type2AIActionConfig2RuntimeForJob()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_ActionDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(AIActionRuntime_TypeDefinitionIndex)->GetStaticField(0x30680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME__CCTOR_OFFSET))();
		}

		static ::System::Void TryInvokeAction(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_TRYINVOKEACTION_OFFSET))(context);
		}

		static ::System::Void AIActionTestForJob(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTESTFORJOB_OFFSET))(context);
		}

		static ::System::Void AIActionToNearestPathFollow(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTONEARESTPATHFOLLOW_OFFSET))(context);
		}

		static ::System::Void AIActionNavmeshTo(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONNAVMESHTO_OFFSET))(context);
		}

		static ::System::Void AIActionSetStateParam(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETSTATEPARAM_OFFSET))(context);
		}

		static ::System::Void AIActionChat(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCHAT_OFFSET))(context);
		}

		static ::System::Void AIActionRandomChat(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMCHAT_OFFSET))(context);
		}

		static ::System::Void AIActionRandomBubbleChat(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMBUBBLECHAT_OFFSET))(context);
		}

		static ::System::Void AIActionTeleport(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTELEPORT_OFFSET))(context);
		}

		static ::System::Void AIActionFade(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFADE_OFFSET))(context);
		}

		static ::System::Void AIActionTagHandler(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTAGHANDLER_OFFSET))(context);
		}

		static ::System::Void AIActionDelayDestroy(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONDELAYDESTROY_OFFSET))(context);
		}

		static ::System::Void AIActionSimpleMoveTo(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSIMPLEMOVETO_OFFSET))(context);
		}

		static ::System::Void AIActionColliderEnable(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCOLLIDERENABLE_OFFSET))(context);
		}

		static ::System::Void AIActionFollow(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFOLLOW_OFFSET))(context);
		}

		static ::System::Void AIActionSetPathFollowTarget(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETPATHFOLLOWTARGET_OFFSET))(context);
		}

		static ::System::Void AIActionPlayMontage(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGE_OFFSET))(context);
		}

		static ::System::Void AIActionPlayMontageSequence(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGESEQUENCE_OFFSET))(context);
		}

		static ::System::Void AIActionPlaySingleClipMontage(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYSINGLECLIPMONTAGE_OFFSET))(context);
		}
	};
}
