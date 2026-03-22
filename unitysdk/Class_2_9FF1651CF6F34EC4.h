#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatBranchNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9FF1651CF6F34EC4_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA956FA0)
#define CLASS_2_9FF1651CF6F34EC4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA957090)
#define CLASS_2_9FF1651CF6F34EC4__CTOR_OFFSET UNITYSDK_OFFSET(0xA956F20)

inline static constexpr unsigned int Class_2_9FF1651CF6F34EC4_TypeDefinitionIndex = 56169;

class Class_2_9FF1651CF6F34EC4 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatBranchNode* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x48

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_9FF1651CF6F34EC4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FF1651CF6F34EC4_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FF1651CF6F34EC4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
