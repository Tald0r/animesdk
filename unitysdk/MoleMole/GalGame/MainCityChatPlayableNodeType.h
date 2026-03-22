#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayableNodeType_TypeDefinitionIndex = 62914;

	enum class MainCityChatPlayableNodeType : ::System::Int32
	{
		PlayChatPlusStoryNode = 45,
		LocalTransition = 25,
		AttractorEnable = 42,
		SetExitChatTransition = 17,
		Transition = 1,
		PlayTimeline = 32,
		AttractorUse = 43,
		SetSpecials = 14,
		JumpChapter = 7,
		LookAtIK = 9,
		Action = 3,
		QuestRecommend = 24,
		ShowConfirmPopup = 30,
		CustomTransition = 2,
		ModifyDynamicObjectActive = 44,
		PlayVoice = 35,
		ChangeActors = 26,
		ModifyCamera = 41,
		BlackScreen = 15,
		TransitionWithActions = 29,
		BranchMultiInput = 20,
		PlayAnimation = 10,
		ChatPlusInit = 46,
		MainCityGraph = 39,
		CloseUI = 33,
		QuestTrack = 23,
		Condition = 40,
		Show3DModel = 21,
		SyncServerData = 34,
		ShowUIGeneralIntimacyUp = 19,
		MiniGameRecord = 36,
		RandomNext = 27,
		Normal = 0,
		ShowUI = 31,
		RandomChoice = 28,
		ChangeNpcName = 37,
		Delay = 38,
	};
}
