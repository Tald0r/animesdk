#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

class Class_2_18804FF7C23FF19F;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_E5CACD817886F636_METHOD_2_02EB3BFA53294DF0_OFFSET UNITYSDK_OFFSET(0x7B2C140)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_E5CACD817886F636_METHOD_2_4BB55856E9E5F404_OFFSET UNITYSDK_OFFSET(0x3334A0)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_E5CACD817886F636_METHOD_2_E83D3547A9015657_OFFSET UNITYSDK_OFFSET(0x333520)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_E5CACD817886F636__CTOR_OFFSET UNITYSDK_OFFSET(0x3333D0)

inline static constexpr unsigned int Class_1_5DF9D0F5061CCF34_Struct_2_E5CACD817886F636_TypeDefinitionIndex = 45333;

struct alignas(8) Class_1_5DF9D0F5061CCF34_Struct_2_E5CACD817886F636
{
	::Class_2_18804FF7C23FF19F* Field_2_0; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_3; // 0x28
	::Nap::NapECS::ComponentMask Field_2_4; // 0x30
	::Nap::NapECS::ComponentMask Field_2_5; // 0x50
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_6; // 0x70
	::System::Boolean Field_2_7; // 0x78

	::System::Void _ctor(::Class_2_18804FF7C23FF19F* a1, ::MoleMole::HollowChessboard::HollowEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_18804FF7C23FF19F*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_E5CACD817886F636__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_2_4BB55856E9E5F404()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_E5CACD817886F636_METHOD_2_4BB55856E9E5F404_OFFSET))(this);
	}

	static ::Class_1_5DF9D0F5061CCF34_Struct_2_E5CACD817886F636 Method_2_02EB3BFA53294DF0(::Class_2_18804FF7C23FF19F* a1, ::MoleMole::HollowChessboard::HollowEntity* a2)
	{
		return ((::Class_1_5DF9D0F5061CCF34_Struct_2_E5CACD817886F636(*)(::Class_2_18804FF7C23FF19F*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_E5CACD817886F636_METHOD_2_02EB3BFA53294DF0_OFFSET))(a1, a2);
	}

	::System::Void Method_2_E83D3547A9015657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_E5CACD817886F636_METHOD_2_E83D3547A9015657_OFFSET))(this);
	}
};
