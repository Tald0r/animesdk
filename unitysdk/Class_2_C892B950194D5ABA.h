#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayVoiceNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_C892B950194D5ABA_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xBB74A50)
#define CLASS_2_C892B950194D5ABA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB74F30)
#define CLASS_2_C892B950194D5ABA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB749D0)

inline static constexpr unsigned int Class_2_C892B950194D5ABA_TypeDefinitionIndex = 45862;

class Class_2_C892B950194D5ABA : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatPlayVoiceNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_C892B950194D5ABA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C892B950194D5ABA_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C892B950194D5ABA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
