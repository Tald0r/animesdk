#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_92;
class Class_1_5F85BB78E8FC7968;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_505B59416708E4DC_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x7616AA0)
#define CLASS_1_505B59416708E4DC_METHOD_1_26F2ADE6CF3F0469_OFFSET UNITYSDK_OFFSET(0x76168F0)
#define CLASS_1_505B59416708E4DC_METHOD_1_75479EFDF938C7BA_OFFSET UNITYSDK_OFFSET(0x7616A00)
#define CLASS_1_505B59416708E4DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x76167E0)

inline static constexpr unsigned int Class_1_505B59416708E4DC_TypeDefinitionIndex = 53761;

class Class_1_505B59416708E4DC : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Class_1_5F85BB78E8FC7968*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_5F85BB78E8FC7968*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_505B59416708E4DC_TypeDefinitionIndex)->GetStaticField(0x33570);
	}
	static ::Foundation::ObjectPoolOfReusable_1<::Class_1_5F85BB78E8FC7968*>** StaticGet_Field_1_0()
	{
		return (::Foundation::ObjectPoolOfReusable_1<::Class_1_5F85BB78E8FC7968*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_505B59416708E4DC_TypeDefinitionIndex)->GetStaticField(0x33578);
	}
	static ::Class_1_43BD383C98B4C0C5_92** StaticGet_Field_1_1()
	{
		return (::Class_1_43BD383C98B4C0C5_92**)Il2CppClass::FromTypeDefinitionIndex(Class_1_505B59416708E4DC_TypeDefinitionIndex)->GetStaticField(0x33580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_505B59416708E4DC__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_26F2ADE6CF3F0469(::Class_1_5F85BB78E8FC7968* a1)
	{
		return ((::System::Void(*)(::Class_1_5F85BB78E8FC7968*))((::PBYTE)hIl2Cpp + CLASS_1_505B59416708E4DC_METHOD_1_26F2ADE6CF3F0469_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::Class_1_5F85BB78E8FC7968*>* Method_1_75479EFDF938C7BA()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_5F85BB78E8FC7968*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_505B59416708E4DC_METHOD_1_75479EFDF938C7BA_OFFSET))();
	}

	static ::Class_1_5F85BB78E8FC7968* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_5F85BB78E8FC7968*(*)())((::PBYTE)hIl2Cpp + CLASS_1_505B59416708E4DC_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}
};
