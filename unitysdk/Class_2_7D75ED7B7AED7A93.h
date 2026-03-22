#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"
#include "unitysdk/Enum_3_104C7FF74440A413.h"

namespace MoleMole::GalGame { class MainCityChatLookIKNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_2F0A76EA9B92FDB0_OFFSET UNITYSDK_OFFSET(0xBCBB950)
#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xBCBAFE0)
#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_6AF2890A11F94F72_OFFSET UNITYSDK_OFFSET(0xBCBB1C0)
#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_8DBE1D18A1A7A307_OFFSET UNITYSDK_OFFSET(0xBCBB530)
#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBCBAF10)
#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBCBB8F0)
#define CLASS_2_7D75ED7B7AED7A93__CTOR_OFFSET UNITYSDK_OFFSET(0xBCBAE90)

inline static constexpr unsigned int Class_2_7D75ED7B7AED7A93_TypeDefinitionIndex = 48695;

class Class_2_7D75ED7B7AED7A93 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatLookIKNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_2_6AF2890A11F94F72(::System::Int32 a1, ::Enum_3_104C7FF74440A413 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Enum_3_104C7FF74440A413, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_6AF2890A11F94F72_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_8DBE1D18A1A7A307(::MoleMole::GalGame::MainCityChatLookIKNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::GalGame::MainCityChatLookIKNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_8DBE1D18A1A7A307_OFFSET))(a1, a2);
	}

	::MoleMole::GalGame::MainCityChatLookIKNode* Method_2_2F0A76EA9B92FDB0()
	{
		return ((::MoleMole::GalGame::MainCityChatLookIKNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_2F0A76EA9B92FDB0_OFFSET))(this);
	}
};
