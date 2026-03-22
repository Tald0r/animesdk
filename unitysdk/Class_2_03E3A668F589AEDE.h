#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatRandomChoiceNode; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_03E3A668F589AEDE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB43C010)
#define CLASS_2_03E3A668F589AEDE_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xB43BA00)
#define CLASS_2_03E3A668F589AEDE_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB43BED0)
#define CLASS_2_03E3A668F589AEDE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB43BFB0)
#define CLASS_2_03E3A668F589AEDE__CTOR_OFFSET UNITYSDK_OFFSET(0xB43B980)

inline static constexpr unsigned int Class_2_03E3A668F589AEDE_TypeDefinitionIndex = 65422;

class Class_2_03E3A668F589AEDE : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatRandomChoiceNode* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>* Field_2_0; // 0x48

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
