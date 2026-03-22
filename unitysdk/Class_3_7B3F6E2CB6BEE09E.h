#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class MaterialParameterRewriter;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }

#define CLASS_3_7B3F6E2CB6BEE09E_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x884FEA0)
#define CLASS_3_7B3F6E2CB6BEE09E_METHOD_3_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x884FDE0)
#define CLASS_3_7B3F6E2CB6BEE09E_METHOD_3_BC38DF5665FBE8F8_OFFSET UNITYSDK_OFFSET(0x8850010)
#define CLASS_3_7B3F6E2CB6BEE09E_METHOD_3_E8C2A5D12B8E1FF3_OFFSET UNITYSDK_OFFSET(0x8850020)
#define CLASS_3_7B3F6E2CB6BEE09E__CTOR_OFFSET UNITYSDK_OFFSET(0x884FF90)

inline static constexpr unsigned int Class_3_7B3F6E2CB6BEE09E_TypeDefinitionIndex = 45011;

class Class_3_7B3F6E2CB6BEE09E : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::MaterialParameterRewriter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B3F6E2CB6BEE09E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_929BD2659F9FA6CA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7B3F6E2CB6BEE09E_METHOD_3_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::MaterialParameterRewriter* Method_3_BC38DF5665FBE8F8()
	{
		return ((::MaterialParameterRewriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B3F6E2CB6BEE09E_METHOD_3_BC38DF5665FBE8F8_OFFSET))(this);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B3F6E2CB6BEE09E_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_3_E8C2A5D12B8E1FF3(::MaterialParameterRewriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter*))((::PBYTE)hIl2Cpp + CLASS_3_7B3F6E2CB6BEE09E_METHOD_3_E8C2A5D12B8E1FF3_OFFSET))(this, a1);
	}
};
