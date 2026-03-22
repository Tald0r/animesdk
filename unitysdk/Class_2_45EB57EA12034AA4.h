#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityActiveDynamicObjectNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_45EB57EA12034AA4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA6B9610)
#define CLASS_2_45EB57EA12034AA4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA6B96B0)
#define CLASS_2_45EB57EA12034AA4__CTOR_OFFSET UNITYSDK_OFFSET(0xA6B9590)

inline static constexpr unsigned int Class_2_45EB57EA12034AA4_TypeDefinitionIndex = 66748;

class Class_2_45EB57EA12034AA4 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityActiveDynamicObjectNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_45EB57EA12034AA4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45EB57EA12034AA4_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45EB57EA12034AA4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
