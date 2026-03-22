#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_81B8168352E894F2_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xA68A5B0)
#define CLASS_2_81B8168352E894F2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA68A7D0)
#define CLASS_2_81B8168352E894F2__CTOR_OFFSET UNITYSDK_OFFSET(0xA68A5A0)

inline static constexpr unsigned int Class_2_81B8168352E894F2_TypeDefinitionIndex = 64769;

class Class_2_81B8168352E894F2 : public ::Class_1_328B10E9F3553A0D
{
public:
	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_81B8168352E894F2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81B8168352E894F2_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81B8168352E894F2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
