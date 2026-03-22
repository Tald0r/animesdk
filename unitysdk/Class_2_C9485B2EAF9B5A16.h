#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSetSpecialsNode; }

#define CLASS_2_C9485B2EAF9B5A16_METHOD_2_A1BFC961761367F5_OFFSET UNITYSDK_OFFSET(0x64EC170)
#define CLASS_2_C9485B2EAF9B5A16_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x64EBF40)
#define CLASS_2_C9485B2EAF9B5A16_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x64EC0A0)
#define CLASS_2_C9485B2EAF9B5A16_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x64EC110)
#define CLASS_2_C9485B2EAF9B5A16_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x64EC040)
#define CLASS_2_C9485B2EAF9B5A16_METHOD_2_D37EAF69998C20E2_OFFSET UNITYSDK_OFFSET(0x64EC100)
#define CLASS_2_C9485B2EAF9B5A16__CTOR_OFFSET UNITYSDK_OFFSET(0x64EBEC0)

inline static constexpr unsigned int Class_2_C9485B2EAF9B5A16_TypeDefinitionIndex = 64187;

class Class_2_C9485B2EAF9B5A16 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatSetSpecialsNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_C9485B2EAF9B5A16__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9485B2EAF9B5A16_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9485B2EAF9B5A16_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9485B2EAF9B5A16_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_D37EAF69998C20E2(::MoleMole::GalGame::MainCityChatSetSpecialsNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetSpecialsNode*))((::PBYTE)hIl2Cpp + CLASS_2_C9485B2EAF9B5A16_METHOD_2_D37EAF69998C20E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9485B2EAF9B5A16_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatSetSpecialsNode* Method_2_A1BFC961761367F5()
	{
		return ((::MoleMole::GalGame::MainCityChatSetSpecialsNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9485B2EAF9B5A16_METHOD_2_A1BFC961761367F5_OFFSET))(this);
	}
};
