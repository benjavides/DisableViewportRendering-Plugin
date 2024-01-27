// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisableRendering/Public/DisableRenderingBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisableRenderingBPLibrary() {}
// Cross Module References
	DISABLERENDERING_API UClass* Z_Construct_UClass_UDisableRenderingBPLibrary();
	DISABLERENDERING_API UClass* Z_Construct_UClass_UDisableRenderingBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DisableRendering();
// End Cross Module References
	DEFINE_FUNCTION(UDisableRenderingBPLibrary::execSetViewportRenderingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDisableRenderingBPLibrary::SetViewportRenderingEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	void UDisableRenderingBPLibrary::StaticRegisterNativesUDisableRenderingBPLibrary()
	{
		UClass* Class = UDisableRenderingBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetViewportRenderingEnabled", &UDisableRenderingBPLibrary::execSetViewportRenderingEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics
	{
		struct DisableRenderingBPLibrary_eventSetViewportRenderingEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((DisableRenderingBPLibrary_eventSetViewportRenderingEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DisableRenderingBPLibrary_eventSetViewportRenderingEnabled_Parms), &Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "DisplayName", "Set Viewport Rendering Enabled" },
		{ "Keywords", "viewport rendering enable disable" },
		{ "ModuleRelativePath", "Public/DisableRenderingBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisableRenderingBPLibrary, nullptr, "SetViewportRenderingEnabled", nullptr, nullptr, Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::DisableRenderingBPLibrary_eventSetViewportRenderingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::DisableRenderingBPLibrary_eventSetViewportRenderingEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisableRenderingBPLibrary);
	UClass* Z_Construct_UClass_UDisableRenderingBPLibrary_NoRegister()
	{
		return UDisableRenderingBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDisableRenderingBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DisableRendering,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisableRenderingBPLibrary_SetViewportRenderingEnabled, "SetViewportRenderingEnabled" }, // 146328299
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "DisableRenderingBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DisableRenderingBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisableRenderingBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::ClassParams = {
		&UDisableRenderingBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDisableRenderingBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UDisableRenderingBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisableRenderingBPLibrary.OuterSingleton, Z_Construct_UClass_UDisableRenderingBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisableRenderingBPLibrary.OuterSingleton;
	}
	template<> DISABLERENDERING_API UClass* StaticClass<UDisableRenderingBPLibrary>()
	{
		return UDisableRenderingBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisableRenderingBPLibrary);
	UDisableRenderingBPLibrary::~UDisableRenderingBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DisableRendering_Source_DisableRendering_Public_DisableRenderingBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DisableRendering_Source_DisableRendering_Public_DisableRenderingBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisableRenderingBPLibrary, UDisableRenderingBPLibrary::StaticClass, TEXT("UDisableRenderingBPLibrary"), &Z_Registration_Info_UClass_UDisableRenderingBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisableRenderingBPLibrary), 2312221457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DisableRendering_Source_DisableRendering_Public_DisableRenderingBPLibrary_h_391177718(TEXT("/Script/DisableRendering"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DisableRendering_Source_DisableRendering_Public_DisableRenderingBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DisableRendering_Source_DisableRendering_Public_DisableRenderingBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
