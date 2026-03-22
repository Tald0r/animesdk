#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatActionPlayNode; }
namespace MoleMole::GalGame { class MainCityChatNPCEnterAction; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityMultiChatNPCEnterAction; }

#define CLASS_2_8E82F10F8E914FA0_METHOD_2_60D66D1EE0DABC91_OFFSET UNITYSDK_OFFSET(0x900A080)
#define CLASS_2_8E82F10F8E914FA0_METHOD_2_7A61F59CD69023FD_OFFSET UNITYSDK_OFFSET(0x9009F30)
#define CLASS_2_8E82F10F8E914FA0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x900A110)
#define CLASS_2_8E82F10F8E914FA0_METHOD_2_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x9009C10)
#define CLASS_2_8E82F10F8E914FA0__CTOR_OFFSET UNITYSDK_OFFSET(0x9009B90)

inline static constexpr unsigned int Class_2_8E82F10F8E914FA0_TypeDefinitionIndex = 38330;

class Class_2_8E82F10F8E914FA0 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatActionPlayNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_8E82F10F8E914FA0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E82F10F8E914FA0_METHOD_2_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_2_60D66D1EE0DABC91(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*))((::PBYTE)hIl2Cpp + CLASS_2_8E82F10F8E914FA0_METHOD_2_60D66D1EE0DABC91_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E82F10F8E914FA0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7A61F59CD69023FD(::MoleMole::GalGame::MainCityChatNPCEnterAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCEnterAction*))((::PBYTE)hIl2Cpp + CLASS_2_8E82F10F8E914FA0_METHOD_2_7A61F59CD69023FD_OFFSET))(this, a1);
	}
};
