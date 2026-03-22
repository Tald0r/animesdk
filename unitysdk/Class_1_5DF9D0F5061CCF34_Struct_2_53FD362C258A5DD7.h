#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

class Class_2_18804FF7C23FF19F;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_53FD362C258A5DD7_METHOD_2_6AAB3D4DBB3B0A06_OFFSET UNITYSDK_OFFSET(0x3726D0)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_53FD362C258A5DD7_METHOD_2_DA5BB2F7E78DA3F3_OFFSET UNITYSDK_OFFSET(0x9D43570)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_53FD362C258A5DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x3725E0)

inline static constexpr unsigned int Class_1_5DF9D0F5061CCF34_Struct_2_53FD362C258A5DD7_TypeDefinitionIndex = 45334;

struct alignas(8) Class_1_5DF9D0F5061CCF34_Struct_2_53FD362C258A5DD7
{
	::Class_2_18804FF7C23FF19F* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_2; // 0x20
	::Nap::NapECS::ComponentMask Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x48

	::System::Void _ctor(::Class_2_18804FF7C23FF19F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_18804FF7C23FF19F*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_53FD362C258A5DD7__CTOR_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_2_6AAB3D4DBB3B0A06()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_53FD362C258A5DD7_METHOD_2_6AAB3D4DBB3B0A06_OFFSET))(this);
	}

	static ::Class_1_5DF9D0F5061CCF34_Struct_2_53FD362C258A5DD7 Method_2_DA5BB2F7E78DA3F3(::Class_2_18804FF7C23FF19F* a1)
	{
		return ((::Class_1_5DF9D0F5061CCF34_Struct_2_53FD362C258A5DD7(*)(::Class_2_18804FF7C23FF19F*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_53FD362C258A5DD7_METHOD_2_DA5BB2F7E78DA3F3_OFFSET))(a1);
	}
};
