#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatRandomNextNode; }

#define CLASS_2_065C2B9BD6C752D4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x71A2BD0)
#define CLASS_2_065C2B9BD6C752D4_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x71A2940)
#define CLASS_2_065C2B9BD6C752D4__CTOR_OFFSET UNITYSDK_OFFSET(0x71A28C0)

inline static constexpr unsigned int Class_2_065C2B9BD6C752D4_TypeDefinitionIndex = 36647;

class Class_2_065C2B9BD6C752D4 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatRandomNextNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_065C2B9BD6C752D4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065C2B9BD6C752D4_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065C2B9BD6C752D4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
