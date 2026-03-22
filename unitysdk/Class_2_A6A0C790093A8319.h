#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatJumpChapterNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_A6A0C790093A8319_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x91B5490)
#define CLASS_2_A6A0C790093A8319_METHOD_2_ADDD3B64D6B175BA_OFFSET UNITYSDK_OFFSET(0x91B56B0)
#define CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x91B55E0)
#define CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x91B5650)
#define CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91B5580)
#define CLASS_2_A6A0C790093A8319_METHOD_2_DCC0735D3152CA7D_OFFSET UNITYSDK_OFFSET(0x91B5640)
#define CLASS_2_A6A0C790093A8319__CTOR_OFFSET UNITYSDK_OFFSET(0x91B5410)

inline static constexpr unsigned int Class_2_A6A0C790093A8319_TypeDefinitionIndex = 37659;

class Class_2_A6A0C790093A8319 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatJumpChapterNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_DCC0735D3152CA7D(::MoleMole::GalGame::MainCityChatJumpChapterNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatJumpChapterNode*))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_DCC0735D3152CA7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatJumpChapterNode* Method_2_ADDD3B64D6B175BA()
	{
		return ((::MoleMole::GalGame::MainCityChatJumpChapterNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_ADDD3B64D6B175BA_OFFSET))(this);
	}
};
