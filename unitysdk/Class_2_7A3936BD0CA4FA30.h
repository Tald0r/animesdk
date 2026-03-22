#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatCallCameraEffectNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_7A3936BD0CA4FA30_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x687A040)
#define CLASS_2_7A3936BD0CA4FA30_METHOD_2_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x6879D80)
#define CLASS_2_7A3936BD0CA4FA30__CTOR_OFFSET UNITYSDK_OFFSET(0x6879D00)

inline static constexpr unsigned int Class_2_7A3936BD0CA4FA30_TypeDefinitionIndex = 70157;

class Class_2_7A3936BD0CA4FA30 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatCallCameraEffectNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_7A3936BD0CA4FA30__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A3936BD0CA4FA30_METHOD_2_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A3936BD0CA4FA30_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
