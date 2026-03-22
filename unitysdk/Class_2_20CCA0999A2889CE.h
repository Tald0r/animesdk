#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MiniGameRecordNode; }

#define CLASS_2_20CCA0999A2889CE_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x5DE4E40)
#define CLASS_2_20CCA0999A2889CE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x5DE5170)
#define CLASS_2_20CCA0999A2889CE__CTOR_OFFSET UNITYSDK_OFFSET(0x5DE4DC0)

inline static constexpr unsigned int Class_2_20CCA0999A2889CE_TypeDefinitionIndex = 56841;

class Class_2_20CCA0999A2889CE : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MiniGameRecordNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_20CCA0999A2889CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20CCA0999A2889CE_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20CCA0999A2889CE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
