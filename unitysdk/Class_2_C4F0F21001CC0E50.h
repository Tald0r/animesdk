#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_71A741F5D691F2DB.h"
#include "unitysdk/Class_2_E529132DDCC9690D_Struct_2_35F396C03964A94A_1.h"
#include "unitysdk/Enum_3_2383C6C1B6DFD4E4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C4F0F21001CC0E50_METHOD_2_08C9B39C07B526E4_1_OFFSET UNITYSDK_OFFSET(0x8A66E90)
#define CLASS_2_C4F0F21001CC0E50_METHOD_2_08C9B39C07B526E4_OFFSET UNITYSDK_OFFSET(0x8A66E20)
#define CLASS_2_C4F0F21001CC0E50_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x8A66C60)
#define CLASS_2_C4F0F21001CC0E50_METHOD_2_F7A22A68AEA852E1_OFFSET UNITYSDK_OFFSET(0x8A66C70)
#define CLASS_2_C4F0F21001CC0E50__CTOR_OFFSET UNITYSDK_OFFSET(0x8A66C40)

inline static constexpr unsigned int Class_2_C4F0F21001CC0E50_TypeDefinitionIndex = 67676;

class Class_2_C4F0F21001CC0E50 : public ::Class_1_71A741F5D691F2DB
{
public:
	::Class_2_E529132DDCC9690D_Struct_2_35F396C03964A94A_1 Field_2_0; // 0x50

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C4F0F21001CC0E50__CTOR_OFFSET))(this, a1, a2);
	}

	::Enum_3_2383C6C1B6DFD4E4 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_2383C6C1B6DFD4E4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F0F21001CC0E50_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_F7A22A68AEA852E1(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&))((::PBYTE)hIl2Cpp + CLASS_2_C4F0F21001CC0E50_METHOD_2_F7A22A68AEA852E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_08C9B39C07B526E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F0F21001CC0E50_METHOD_2_08C9B39C07B526E4_OFFSET))(this);
	}

	::System::Void Method_2_08C9B39C07B526E4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F0F21001CC0E50_METHOD_2_08C9B39C07B526E4_1_OFFSET))(this);
	}
};
