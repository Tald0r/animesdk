#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

class Class_1_982D1D66E14C5EA5;
class Class_2_7C14488DAEE516C3;
namespace MoleMole::UI::FlowerShop { class FlowerExpressionContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_86E234F0A610E98C_METHOD_1_07F779F326EEF65B_OFFSET UNITYSDK_OFFSET(0x84D50B0)
#define CLASS_1_86E234F0A610E98C_METHOD_1_758D5FB93F35B87A_OFFSET UNITYSDK_OFFSET(0x84D55F0)
#define CLASS_1_86E234F0A610E98C_METHOD_1_92EB806315DCB90E_OFFSET UNITYSDK_OFFSET(0x84D5570)
#define CLASS_1_86E234F0A610E98C_METHOD_1_C8B732F13FE31DFC_OFFSET UNITYSDK_OFFSET(0x84D5010)
#define CLASS_1_86E234F0A610E98C_METHOD_1_D3F386645BCA2662_OFFSET UNITYSDK_OFFSET(0x84D5340)
#define CLASS_1_86E234F0A610E98C__CTOR_OFFSET UNITYSDK_OFFSET(0x84D5000)

inline static constexpr unsigned int Class_1_86E234F0A610E98C_TypeDefinitionIndex = 53738;

class Class_1_86E234F0A610E98C : public ::System::Object
{
public:
	::MoleMole::UI::FlowerShop::FlowerExpressionContext* Field_1_0; // 0x10
	::Class_2_7C14488DAEE516C3* Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::UI::FlowerShop::FlowerExpressionContext* a1, ::Class_2_7C14488DAEE516C3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::FlowerExpressionContext*, ::Class_2_7C14488DAEE516C3*))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_A47ACAABA9AAFE92 Method_1_C8B732F13FE31DFC(::System::String* a1)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_C8B732F13FE31DFC_OFFSET))(this, a1);
	}

	::Struct_2_A47ACAABA9AAFE92 Method_1_07F779F326EEF65B(::System::String* a1, ::Struct_2_A47ACAABA9AAFE92 a2)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::System::String*, ::Struct_2_A47ACAABA9AAFE92))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_07F779F326EEF65B_OFFSET))(this, a1, a2);
	}

	::Struct_2_A47ACAABA9AAFE92 Method_1_D3F386645BCA2662(::System::String* a1, ::Struct_2_A47ACAABA9AAFE92 a2, ::Struct_2_A47ACAABA9AAFE92 a3)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::System::String*, ::Struct_2_A47ACAABA9AAFE92, ::Struct_2_A47ACAABA9AAFE92))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_D3F386645BCA2662_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_92EB806315DCB90E(::Class_1_982D1D66E14C5EA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_982D1D66E14C5EA5*))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_92EB806315DCB90E_OFFSET))(this, a1);
	}

	::System::Void Method_1_758D5FB93F35B87A(::Class_1_982D1D66E14C5EA5* a1, ::System::Collections::Generic::List_1<::Class_1_982D1D66E14C5EA5*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_982D1D66E14C5EA5*, ::System::Collections::Generic::List_1<::Class_1_982D1D66E14C5EA5*>*))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_758D5FB93F35B87A_OFFSET))(this, a1, a2);
	}
};
