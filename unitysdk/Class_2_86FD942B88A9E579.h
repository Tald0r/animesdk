#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayTimelineNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_86FD942B88A9E579_METHOD_2_99ACC73CEE781C2F_OFFSET UNITYSDK_OFFSET(0x9E6B960)
#define CLASS_2_86FD942B88A9E579_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x9E6C1E0)
#define CLASS_2_86FD942B88A9E579_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x9E6BDB0)
#define CLASS_2_86FD942B88A9E579__CTOR_OFFSET UNITYSDK_OFFSET(0x9E6B8E0)

inline static constexpr unsigned int Class_2_86FD942B88A9E579_TypeDefinitionIndex = 57122;

class Class_2_86FD942B88A9E579 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatPlayTimelineNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_99ACC73CEE781C2F(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_99ACC73CEE781C2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
