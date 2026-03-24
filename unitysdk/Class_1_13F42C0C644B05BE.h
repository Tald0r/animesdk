#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_26E67000C5FBEB0C;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

#define CLASS_1_13F42C0C644B05BE_METHOD_1_1156AA9C8571A61E_OFFSET UNITYSDK_OFFSET(0x7C075A0)
#define CLASS_1_13F42C0C644B05BE_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x7C06FD0)
#define CLASS_1_13F42C0C644B05BE_METHOD_1_7083BE116A92D90E_OFFSET UNITYSDK_OFFSET(0x7C07680)
#define CLASS_1_13F42C0C644B05BE_METHOD_1_A6AC49827E4360D2_OFFSET UNITYSDK_OFFSET(0x7C06B10)
#define CLASS_1_13F42C0C644B05BE_METHOD_1_AA1C5800F144A705_OFFSET UNITYSDK_OFFSET(0x7C070C0)
#define CLASS_1_13F42C0C644B05BE_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x7C07180)
#define CLASS_1_13F42C0C644B05BE_METHOD_1_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x7C06F10)
#define CLASS_1_13F42C0C644B05BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x7C06AB0)
#define CLASS_1_13F42C0C644B05BE__CTOR_OFFSET UNITYSDK_OFFSET(0x7C069B0)

inline static constexpr unsigned int Class_1_13F42C0C644B05BE_TypeDefinitionIndex = 71280;

class Class_1_13F42C0C644B05BE : public ::System::Object
{
public:
	static ::Class_1_13F42C0C644B05BE** StaticGet_Field_1_0()
	{
		return (::Class_1_13F42C0C644B05BE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13F42C0C644B05BE_TypeDefinitionIndex)->GetStaticField(0x39A90);
	}
	static ::System::Comparison_1<::Class_1_26E67000C5FBEB0C*>** StaticGet_Field_1_2()
	{
		return (::System::Comparison_1<::Class_1_26E67000C5FBEB0C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13F42C0C644B05BE_TypeDefinitionIndex)->GetStaticField(0x39A98);
	}
	::UnityEngine::UI::Collections::IndexedSet_1<::Class_1_26E67000C5FBEB0C*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13F42C0C644B05BE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13F42C0C644B05BE__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_A6AC49827E4360D2(::Class_1_26E67000C5FBEB0C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_26E67000C5FBEB0C*))((::PBYTE)hIl2Cpp + CLASS_1_13F42C0C644B05BE_METHOD_1_A6AC49827E4360D2_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_E83C86A203FAF2A6(::Class_1_26E67000C5FBEB0C* a1)
	{
		return ((::System::Void(*)(::Class_1_26E67000C5FBEB0C*))((::PBYTE)hIl2Cpp + CLASS_1_13F42C0C644B05BE_METHOD_1_E83C86A203FAF2A6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AA1C5800F144A705(::Class_1_26E67000C5FBEB0C* a1)
	{
		return ((::System::Boolean(*)(::Class_1_26E67000C5FBEB0C*))((::PBYTE)hIl2Cpp + CLASS_1_13F42C0C644B05BE_METHOD_1_AA1C5800F144A705_OFFSET))(a1);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13F42C0C644B05BE_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	static ::Class_1_13F42C0C644B05BE* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_13F42C0C644B05BE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_13F42C0C644B05BE_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	static ::System::Int32 Method_1_1156AA9C8571A61E(::Class_1_26E67000C5FBEB0C* a1, ::Class_1_26E67000C5FBEB0C* a2)
	{
		return ((::System::Int32(*)(::Class_1_26E67000C5FBEB0C*, ::Class_1_26E67000C5FBEB0C*))((::PBYTE)hIl2Cpp + CLASS_1_13F42C0C644B05BE_METHOD_1_1156AA9C8571A61E_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_7083BE116A92D90E(::UnityEngine::Transform* a1)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_13F42C0C644B05BE_METHOD_1_7083BE116A92D90E_OFFSET))(a1);
	}
};
