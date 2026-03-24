#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShowUIGeneralIntimacyUpNode; }

#define CLASS_2_6942276E29718F2C_METHOD_2_9A4B8D8B70CE3845_OFFSET UNITYSDK_OFFSET(0x83683F0)
#define CLASS_2_6942276E29718F2C_METHOD_2_9FEC95FABC646B0B_OFFSET UNITYSDK_OFFSET(0x8368580)
#define CLASS_2_6942276E29718F2C_METHOD_2_B21AD074EE2B0CEC_OFFSET UNITYSDK_OFFSET(0x8368600)
#define CLASS_2_6942276E29718F2C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x8368590)
#define CLASS_2_6942276E29718F2C__CTOR_OFFSET UNITYSDK_OFFSET(0x8368370)

inline static constexpr unsigned int Class_2_6942276E29718F2C_TypeDefinitionIndex = 44170;

class Class_2_6942276E29718F2C : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A4B8D8B70CE3845(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_9A4B8D8B70CE3845_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* Method_2_9FEC95FABC646B0B()
	{
		return ((::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_9FEC95FABC646B0B_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B21AD074EE2B0CEC(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_B21AD074EE2B0CEC_OFFSET))(this, a1);
	}
};
