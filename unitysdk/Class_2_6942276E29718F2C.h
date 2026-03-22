#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShowUIGeneralIntimacyUpNode; }

#define CLASS_2_6942276E29718F2C_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xB5626E0)
#define CLASS_2_6942276E29718F2C_METHOD_2_9FEC95FABC646B0B_OFFSET UNITYSDK_OFFSET(0xB5628B0)
#define CLASS_2_6942276E29718F2C_METHOD_2_B21AD074EE2B0CEC_OFFSET UNITYSDK_OFFSET(0xB5628C0)
#define CLASS_2_6942276E29718F2C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB562850)
#define CLASS_2_6942276E29718F2C__CTOR_OFFSET UNITYSDK_OFFSET(0xB562660)

inline static constexpr unsigned int Class_2_6942276E29718F2C_TypeDefinitionIndex = 76885;

class Class_2_6942276E29718F2C : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* Method_2_9FEC95FABC646B0B()
	{
		return ((::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_9FEC95FABC646B0B_OFFSET))(this);
	}

	::System::Void Method_2_B21AD074EE2B0CEC(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_B21AD074EE2B0CEC_OFFSET))(this, a1);
	}
};
