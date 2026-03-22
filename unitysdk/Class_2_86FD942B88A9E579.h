#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayTimelineNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_86FD942B88A9E579_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0xBAC1C20)
#define CLASS_2_86FD942B88A9E579_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBAC2480)
#define CLASS_2_86FD942B88A9E579_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xBAC2060)
#define CLASS_2_86FD942B88A9E579__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC1BA0)

inline static constexpr unsigned int Class_2_86FD942B88A9E579_TypeDefinitionIndex = 45203;

class Class_2_86FD942B88A9E579 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatPlayTimelineNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
