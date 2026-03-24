#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
class Class_4_425BBC3CBFD638A0_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_2A163AA3437A6152_OFFSET UNITYSDK_OFFSET(0x8252B30)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_30F222892C8AA97A_OFFSET UNITYSDK_OFFSET(0x8252930)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_564567FB2FFBCC0D_OFFSET UNITYSDK_OFFSET(0x82529B0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_5F521621E1E6CF17_OFFSET UNITYSDK_OFFSET(0x8252BB0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_8BAE13BA2D9987F5_OFFSET UNITYSDK_OFFSET(0x82520D0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0x82528B0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8252F20)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x8251DF0)
#define CLASS_3_0BA90EB3FCC97A68__CTOR_OFFSET UNITYSDK_OFFSET(0x8252D40)

inline static constexpr unsigned int Class_3_0BA90EB3FCC97A68_TypeDefinitionIndex = 75857;

class Class_3_0BA90EB3FCC97A68 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_4; // 0x18
	::Class_4_425BBC3CBFD638A0_1* Field_3_1; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_8BAE13BA2D9987F5(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_8BAE13BA2D9987F5_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_2A163AA3437A6152(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_2A163AA3437A6152_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_30F222892C8AA97A(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_30F222892C8AA97A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_564567FB2FFBCC0D(::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_564567FB2FFBCC0D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_A367EE0F970DCB81_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_5F521621E1E6CF17(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_5F521621E1E6CF17_OFFSET))(this, a1);
	}
};
