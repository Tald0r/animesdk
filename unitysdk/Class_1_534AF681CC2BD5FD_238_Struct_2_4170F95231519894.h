#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_18804FF7C23FF19F;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_238_STRUCT_2_4170F95231519894_METHOD_2_E8BF97BC24AB5891_OFFSET UNITYSDK_OFFSET(0xBAC6AD0)
#define CLASS_1_534AF681CC2BD5FD_238_STRUCT_2_4170F95231519894_METHOD_2_ED1C9FFB8921385F_OFFSET UNITYSDK_OFFSET(0x3B9550)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_238_Struct_2_4170F95231519894_TypeDefinitionIndex = 49480;

struct alignas(8) Class_1_534AF681CC2BD5FD_238_Struct_2_4170F95231519894
{
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_0; // 0x10
	::Class_2_18804FF7C23FF19F* Field_2_1; // 0x18

	::MoleMole::HollowChessboard::HollowEntity* Method_2_ED1C9FFB8921385F()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_238_STRUCT_2_4170F95231519894_METHOD_2_ED1C9FFB8921385F_OFFSET))(this);
	}

	static ::Class_1_534AF681CC2BD5FD_238_Struct_2_4170F95231519894 Method_2_E8BF97BC24AB5891(::Class_2_18804FF7C23FF19F* a1)
	{
		return ((::Class_1_534AF681CC2BD5FD_238_Struct_2_4170F95231519894(*)(::Class_2_18804FF7C23FF19F*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_238_STRUCT_2_4170F95231519894_METHOD_2_E8BF97BC24AB5891_OFFSET))(a1);
	}
};
