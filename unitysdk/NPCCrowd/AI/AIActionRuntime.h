#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ActionContext.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class AIActionRuntime_ActionDelegate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCHAT_OFFSET UNITYSDK_OFFSET(0x7EB89D0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCOLLIDERENABLE_OFFSET UNITYSDK_OFFSET(0x6F94C20)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONDELAYDESTROY_OFFSET UNITYSDK_OFFSET(0x6F940D0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFADE_OFFSET UNITYSDK_OFFSET(0x6F93130)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFOLLOW_OFFSET UNITYSDK_OFFSET(0x6F94F10)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONNAVMESHTO_OFFSET UNITYSDK_OFFSET(0x7EB7C60)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x6F95B10)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGE_OFFSET UNITYSDK_OFFSET(0x6F95520)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYSINGLECLIPMONTAGE_OFFSET UNITYSDK_OFFSET(0x6F96240)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMBUBBLECHAT_OFFSET UNITYSDK_OFFSET(0x6F91890)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMCHAT_OFFSET UNITYSDK_OFFSET(0x7EB9740)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETPATHFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x6F952F0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETSTATEPARAM_OFFSET UNITYSDK_OFFSET(0x7EB8260)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSIMPLEMOVETO_OFFSET UNITYSDK_OFFSET(0x6F94430)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTAGHANDLER_OFFSET UNITYSDK_OFFSET(0x6F93730)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTELEPORT_OFFSET UNITYSDK_OFFSET(0x6F926A0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTESTFORJOB_OFFSET UNITYSDK_OFFSET(0x7EB7550)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTONEARESTPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x7EB7750)
#define NPCCROWD_AI_AIACTIONRUNTIME_TRYINVOKEACTION_OFFSET UNITYSDK_OFFSET(0x7EB73A0)
#define NPCCROWD_AI_AIACTIONRUNTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x6F96950)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRuntime_TypeDefinitionIndex = 63281;

	class AIActionRuntime : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_ActionDelegate*>** StaticGet_Type2AIActionConfig2RuntimeForJob()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_ActionDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(AIActionRuntime_TypeDefinitionIndex)->GetStaticField(0x32450);
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
