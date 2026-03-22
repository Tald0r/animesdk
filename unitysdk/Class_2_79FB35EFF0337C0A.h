#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatChangeNpcNameNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_79FB35EFF0337C0A_METHOD_2_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0x8CA00D0)
#define CLASS_2_79FB35EFF0337C0A_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8C9FF90)
#define CLASS_2_79FB35EFF0337C0A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CA0400)
#define CLASS_2_79FB35EFF0337C0A__CTOR_OFFSET UNITYSDK_OFFSET(0x8C9FF10)

inline static constexpr unsigned int Class_2_79FB35EFF0337C0A_TypeDefinitionIndex = 64998;

class Class_2_79FB35EFF0337C0A : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatChangeNpcNameNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_79FB35EFF0337C0A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79FB35EFF0337C0A_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79FB35EFF0337C0A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79FB35EFF0337C0A_METHOD_2_017C915772AE00E9_OFFSET))(this);
	}
};
