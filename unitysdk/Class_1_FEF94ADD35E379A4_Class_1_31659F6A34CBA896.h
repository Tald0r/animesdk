#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_2_1908F2437AE347F8;

#define CLASS_1_FEF94ADD35E379A4_CLASS_1_31659F6A34CBA896_METHOD_1_95A0BFCF94751546_OFFSET UNITYSDK_OFFSET(0x742E9B0)
#define CLASS_1_FEF94ADD35E379A4_CLASS_1_31659F6A34CBA896_METHOD_1_D59318DE59027754_OFFSET UNITYSDK_OFFSET(0x742E8E0)
#define CLASS_1_FEF94ADD35E379A4_CLASS_1_31659F6A34CBA896_METHOD_1_E8701D3A54784517_OFFSET UNITYSDK_OFFSET(0x742EB80)
#define CLASS_1_FEF94ADD35E379A4_CLASS_1_31659F6A34CBA896__CTOR_OFFSET UNITYSDK_OFFSET(0x742E830)

inline static constexpr unsigned int Class_1_FEF94ADD35E379A4_Class_1_31659F6A34CBA896_TypeDefinitionIndex = 69983;

class Class_1_FEF94ADD35E379A4_Class_1_31659F6A34CBA896 : public ::System::Object
{
public:
	::Class_2_1908F2437AE347F8<::System::Type*, ::MoleMole::UIBaseController*>* Field_1_1; // 0x10
	::Enum_3_340DE32BA097F66C Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF94ADD35E379A4_CLASS_1_31659F6A34CBA896__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D59318DE59027754(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_FEF94ADD35E379A4_CLASS_1_31659F6A34CBA896_METHOD_1_D59318DE59027754_OFFSET))(this, a1);
	}

	::System::Void Method_1_95A0BFCF94751546(::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_FEF94ADD35E379A4_CLASS_1_31659F6A34CBA896_METHOD_1_95A0BFCF94751546_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8701D3A54784517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF94ADD35E379A4_CLASS_1_31659F6A34CBA896_METHOD_1_E8701D3A54784517_OFFSET))(this);
	}
};
