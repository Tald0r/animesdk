#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_950C34EC5D7CBA37.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/Struct_2_17E0E0442218CD79.h"
#include "unitysdk/Struct_2_217EE568A28FAED7.h"
#include "unitysdk/Struct_2_64E2BDD85DD544FC.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_159;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_44735FAC24E37693_METHOD_2_43C5D72FCA25A189_OFFSET UNITYSDK_OFFSET(0x8328B90)
#define CLASS_2_44735FAC24E37693_METHOD_2_4AB30F8605D01F43_OFFSET UNITYSDK_OFFSET(0x8329060)
#define CLASS_2_44735FAC24E37693_METHOD_2_C5FADD96EC5BFC5E_OFFSET UNITYSDK_OFFSET(0x8329360)
#define CLASS_2_44735FAC24E37693_METHOD_2_F7F9FC074B315BE6_OFFSET UNITYSDK_OFFSET(0x83288E0)
#define CLASS_2_44735FAC24E37693__CTOR_OFFSET UNITYSDK_OFFSET(0x8329350)

inline static constexpr unsigned int Class_2_44735FAC24E37693_TypeDefinitionIndex = 37200;

class Class_2_44735FAC24E37693 : public ::Class_1_950C34EC5D7CBA37
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44735FAC24E37693__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F7F9FC074B315BE6(::Struct_2_17E0E0442218CD79& a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_0_16E4307DCC419505_159*, ::Struct_2_217EE568A28FAED7>>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_17E0E0442218CD79&, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_0_16E4307DCC419505_159*, ::Struct_2_217EE568A28FAED7>>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_44735FAC24E37693_METHOD_2_F7F9FC074B315BE6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_43C5D72FCA25A189(::Struct_2_17E0E0442218CD79& a1, ::System::Collections::Generic::List_1<::Struct_2_217EE568A28FAED7>* a2, ::Struct_2_64E2BDD85DD544FC<::MoleMole::HollowChessboard::RenderDataHandle> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_17E0E0442218CD79&, ::System::Collections::Generic::List_1<::Struct_2_217EE568A28FAED7>*, ::Struct_2_64E2BDD85DD544FC<::MoleMole::HollowChessboard::RenderDataHandle>))((::PBYTE)hIl2Cpp + CLASS_2_44735FAC24E37693_METHOD_2_43C5D72FCA25A189_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_159* Method_2_4AB30F8605D01F43(::Struct_2_17E0E0442218CD79& a1, ::Struct_2_217EE568A28FAED7 a2)
	{
		return ((::Class_0_16E4307DCC419505_159*(*)(::PVOID, ::Struct_2_17E0E0442218CD79&, ::Struct_2_217EE568A28FAED7))((::PBYTE)hIl2Cpp + CLASS_2_44735FAC24E37693_METHOD_2_4AB30F8605D01F43_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_159* Method_2_C5FADD96EC5BFC5E(::Struct_2_17E0E0442218CD79& a1)
	{
		return ((::Class_0_16E4307DCC419505_159*(*)(::PVOID, ::Struct_2_17E0E0442218CD79&))((::PBYTE)hIl2Cpp + CLASS_2_44735FAC24E37693_METHOD_2_C5FADD96EC5BFC5E_OFFSET))(this, a1);
	}
};
