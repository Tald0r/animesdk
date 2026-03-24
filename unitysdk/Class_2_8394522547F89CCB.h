#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class ChatChangeEffectStateNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_8394522547F89CCB_METHOD_2_47F50B259C23D1F5_OFFSET UNITYSDK_OFFSET(0x8FFF670)
#define CLASS_2_8394522547F89CCB_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x8FFFAA0)
#define CLASS_2_8394522547F89CCB__CTOR_OFFSET UNITYSDK_OFFSET(0x8FFF5F0)

inline static constexpr unsigned int Class_2_8394522547F89CCB_TypeDefinitionIndex = 43034;

class Class_2_8394522547F89CCB : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::ChatChangeEffectStateNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_8394522547F89CCB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_47F50B259C23D1F5(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_8394522547F89CCB_METHOD_2_47F50B259C23D1F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_8394522547F89CCB_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
