#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayableNodeType_TypeDefinitionIndex = 55268;

	enum class MainCityChatPlayableNodeType : ::System::Int32
	{
		JumpChapter = 7,
		PlayChatPlusStoryNode = 45,
		ChatPlusInit = 46,
		AttractorUse = 43,
		MiniGameRecord = 36,
		Action = 3,
		CloseUI = 33,
		MainCityGraph = 39,
		PlayTimeline = 32,
		CustomTransition = 2,
		ChangeActors = 26,
		LocalTransition = 25,
		ShowUI = 31,
		PlayVoice = 35,
		Show3DModel = 21,
		ChatAttachEffect = 47,
		SyncServerData = 34,
		BranchMultiInput = 20,
		ChangeEffectState = 48,
		ChangeNpcName = 37,
		Transition = 1,
		RandomNext = 27,
		ShowUIGeneralIntimacyUp = 19,
		TransitionWithActions = 29,
		Delay = 38,
		Condition = 40,
		RandomChoice = 28,
		ModifyCamera = 41,
		Normal = 0,
		LookAtIK = 9,
		QuestRecommend = 24,
		BlackScreen = 15,
		PlayAnimation = 10,
		AttractorEnable = 42,
		ShowConfirmPopup = 30,
		SetSpecials = 14,
		QuestTrack = 23,
		ModifyDynamicObjectActive = 44,
		SetExitChatTransition = 17,
	};
}
