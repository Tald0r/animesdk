#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_EDA2D665E8559D21_STRUCT_2_932E03B06FC34483_EQUALS_OFFSET UNITYSDK_OFFSET(0x364DD0)
#define CLASS_2_EDA2D665E8559D21_STRUCT_2_932E03B06FC34483_METHOD_2_0D619D33FB7130CC_OFFSET UNITYSDK_OFFSET(0x364E60)
#define CLASS_2_EDA2D665E8559D21_STRUCT_2_932E03B06FC34483_METHOD_2_0EE970143C56269D_OFFSET UNITYSDK_OFFSET(0x364EF0)
#define CLASS_2_EDA2D665E8559D21_STRUCT_2_932E03B06FC34483__CCTOR_OFFSET UNITYSDK_OFFSET(0x95938C0)

inline static constexpr unsigned int Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483_TypeDefinitionIndex = 61636;

struct alignas(8) Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483
{
	static ::Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483* StaticGet_Field_2_0()
	{
		return (::Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483_TypeDefinitionIndex)->GetStaticField(0x2F400);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_2_3; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_STRUCT_2_932E03B06FC34483__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_STRUCT_2_932E03B06FC34483_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_0D619D33FB7130CC(::Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_EDA2D665E8559D21_Struct_2_932E03B06FC34483))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_STRUCT_2_932E03B06FC34483_METHOD_2_0D619D33FB7130CC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0EE970143C56269D(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EDA2D665E8559D21_STRUCT_2_932E03B06FC34483_METHOD_2_0EE970143C56269D_OFFSET))(this, a1);
	}
};
