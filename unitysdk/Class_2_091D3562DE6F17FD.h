#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatQuestRecommendNode; }

#define CLASS_2_091D3562DE6F17FD_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x884FCE0)
#define CLASS_2_091D3562DE6F17FD_METHOD_2_3D1BF992603415DA_OFFSET UNITYSDK_OFFSET(0x884FD60)
#define CLASS_2_091D3562DE6F17FD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x884FD70)
#define CLASS_2_091D3562DE6F17FD_METHOD_2_DDA1A1F8EE95D4B5_OFFSET UNITYSDK_OFFSET(0x884FDD0)
#define CLASS_2_091D3562DE6F17FD__CTOR_OFFSET UNITYSDK_OFFSET(0x884FC60)

inline static constexpr unsigned int Class_2_091D3562DE6F17FD_TypeDefinitionIndex = 45255;

class Class_2_091D3562DE6F17FD : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatQuestRecommendNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_091D3562DE6F17FD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_091D3562DE6F17FD_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_3D1BF992603415DA(::MoleMole::GalGame::MainCityChatQuestRecommendNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestRecommendNode*))((::PBYTE)hIl2Cpp + CLASS_2_091D3562DE6F17FD_METHOD_2_3D1BF992603415DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_091D3562DE6F17FD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatQuestRecommendNode* Method_2_DDA1A1F8EE95D4B5()
	{
		return ((::MoleMole::GalGame::MainCityChatQuestRecommendNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_091D3562DE6F17FD_METHOD_2_DDA1A1F8EE95D4B5_OFFSET))(this);
	}
};
