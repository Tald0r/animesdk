#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_F3323602A4A296CB_Struct_2_1C7EE63396237134.h"
#include "unitysdk/Enum_3_8855AD768EB2675C.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier_Enum_3_F23B010749D1BB8E.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_A0B58236B258B7B2;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_ISLOCAL_OFFSET UNITYSDK_OFFSET(0x44A160)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_OFFSETCONFIGS_OFFSET UNITYSDK_OFFSET(0x2FC120)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_VECTORTYPE_OFFSET UNITYSDK_OFFSET(0x3840E0)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_METHOD_2_4E82DD85816A10CB_OFFSET UNITYSDK_OFFSET(0x44A1D0)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x44A1E0)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x44A250)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x44A1A0)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x44A170)

namespace MoleMole
{
	inline static constexpr unsigned int StaticVectorMaterialModifier_TypeDefinitionIndex = 73481;

	struct alignas(8) StaticVectorMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::Byte maskType; // 0x18
		::System::Boolean _isLocal; // 0x19
		::System::Boolean enable; // 0x1A
		::UnityEngine::Vector4 value; // 0x1C
		::MoleMole::StaticVectorMaterialModifier_Enum_3_F23B010749D1BB8E _vectorType; // 0x2C
		::Il2CppArray<::Class_4_F3323602A4A296CB_Struct_2_1C7EE63396237134>* _offsetConfigs; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::MoleMole::StaticVectorMaterialModifier_Enum_3_F23B010749D1BB8E a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::MoleMole::StaticVectorMaterialModifier_Enum_3_F23B010749D1BB8E))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2, ::Il2CppArray<::Class_4_F3323602A4A296CB_Struct_2_1C7EE63396237134>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Il2CppArray<::Class_4_F3323602A4A296CB_Struct_2_1C7EE63396237134>*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_isLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_ISLOCAL_OFFSET))(this);
		}

		::MoleMole::StaticVectorMaterialModifier_Enum_3_F23B010749D1BB8E get_vectorType()
		{
			return ((::MoleMole::StaticVectorMaterialModifier_Enum_3_F23B010749D1BB8E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_VECTORTYPE_OFFSET))(this);
		}

		::Il2CppArray<::Class_4_F3323602A4A296CB_Struct_2_1C7EE63396237134>* get_offsetConfigs()
		{
			return ((::Il2CppArray<::Class_4_F3323602A4A296CB_Struct_2_1C7EE63396237134>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_OFFSETCONFIGS_OFFSET))(this);
		}

		::Class_1_A0B58236B258B7B2* Method_2_4E82DD85816A10CB(::Enum_3_8855AD768EB2675C a1, ::MoleMole::MonoRenderHandler* a2)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_METHOD_2_4E82DD85816A10CB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_2_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
